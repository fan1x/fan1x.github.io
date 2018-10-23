using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prg2
{
    class Malovani
    {
        class Pixel
        {
            public enum Color
            {
                BLACK, WHITE
            }

            public Pixel()
            {
                color = Color.WHITE;
            }

            public void SetColor(Color color)
            {
                this.color = color;
            }

            public Color GetColor()
            {
                return color;
            }

            private Color color;
        }

        struct Coordinate
        {
            public Coordinate(uint x, uint y)
            {
                this.x = x;
                this.y = y;
            }

            public uint x;
            public uint y;
        }


        class Canvas
        {
            public Canvas(Coordinate maximalCoordinate)
            {
                width = maximalCoordinate.x;
                height = maximalCoordinate.y;

                data = new Pixel[width, height];
                for (uint x = 0; x < width; x++)
                {
                    for (uint y = 0; y < height; y++)
                    {
                        data[x, y] = new Pixel();
                    }
                }
            }

            public bool IsInCanvas(Coordinate coordinate)
            {
                return coordinate.x < width && coordinate.y < height;
            }

            public Pixel GetPixel(Coordinate coordinate)
            {
                if (!IsInCanvas(coordinate))
                    return new Pixel(); // return dummy value :)

                return data[coordinate.x, coordinate.y];
            }

            public void SetPixel(Coordinate coordinate, Pixel.Color color)
            {
                GetPixel(coordinate).SetColor(color);
            }

            public void SetPixel(uint x, uint y, Pixel.Color color)
            {
                SetPixel(new Coordinate(x, y), color);
            }

            public void Print()
            {
                PrintLine(width + 2);
                Console.WriteLine();

                for (uint y = 0; y < height; y++)
                {
                    Console.Write("|");
                    for (uint x = 0; x < width; x++)
                    {
                        if (GetPixel(new Coordinate(x, y)).GetColor() == Pixel.Color.BLACK)
                        {
                            Console.Write("+");
                        }
                        else
                        {
                            Console.Write(" ");
                        }
                    }
                    Console.WriteLine("|");
                }
                PrintLine(width + 2);
                Console.WriteLine();
            }

            private void PrintLine(uint length)
            {
                for (uint i = 0; i < length; i++)
                {
                    Console.Write("-");
                }
            }

            private Pixel[,] data;
            private uint width, height;
        }

        abstract class Tool
        {
            public abstract void Action(Canvas canvas, Coordinate coordinate);
        }

        class Pen : Tool
        {
            public override void Action(Canvas canvas, Coordinate coordinate)
            {
                canvas.SetPixel(coordinate, Pixel.Color.BLACK);
            }
        }

        abstract class Shape : Tool
        {
        }

        class Square : Shape
        {
            public override void Action(Canvas canvas, Coordinate coordinate)
            {
                uint x = coordinate.x;
                uint y = coordinate.y;
                canvas.SetPixel(x - 1, y - 1, Pixel.Color.BLACK);
                canvas.SetPixel(x, y - 1, Pixel.Color.BLACK);
                canvas.SetPixel(x + 1, y - 1, Pixel.Color.BLACK);
                canvas.SetPixel(x + 1, y, Pixel.Color.BLACK);
                canvas.SetPixel(x + 1, y + 1, Pixel.Color.BLACK);
                canvas.SetPixel(x, y + 1, Pixel.Color.BLACK);
                canvas.SetPixel(x - 1, y + 1, Pixel.Color.BLACK);
                canvas.SetPixel(x - 1, y, Pixel.Color.BLACK);
            }
        }

        class Draw
        {
            public Draw(uint canvasWidth, uint canvasHeigth)
            {
                canvas = new Canvas(new Coordinate(canvasWidth, canvasHeigth));
                ChangeTool(new Pen());
            }

            public void ClickOnCanvas(Coordinate coordinate)
            {
                usedTool.Action(canvas, coordinate);
            }

            public void ChangeTool(Tool newTool)
            {
                usedTool = newTool;
            }

            public void PrintCanvas()
            {
                canvas.Print();
            }

            private Canvas canvas;
            private Tool usedTool;
        }

        static void Main(string[] args)
        {
            Draw draw = new Draw(20, 20);
            draw.ChangeTool(new Pen());
            draw.ClickOnCanvas(new Coordinate(1, 2));
            draw.PrintCanvas();
            draw.ChangeTool(new Square());
            draw.ClickOnCanvas(new Coordinate(10, 10));
            draw.PrintCanvas();
            draw.ClickOnCanvas(new Coordinate(18, 19));
            draw.PrintCanvas();
        }
    }
}