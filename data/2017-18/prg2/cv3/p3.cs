using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cv3_3
{
    class Program
    {
        abstract class Logger
        {
            public enum Target
            {
                FILE,
                CONSOLE,
                NONE
            }

            public enum Level
            {
                DEBUG,
                RELEASE,
            }

            public Target getTarget()
            {
                return target;
            }

            public void setTarget(Target target)
            {
                this.target = target;
            }

            public Level getLevel()
            {
                return level;
            }

            public void setLevel(Level level)
            {
                this.level = level;
            }

            public Logger(Target target, Level level)
            {
                setTarget(target);
                setLevel(level);
            }

            // Each derived class needs to implement this.
            public abstract void log(string message);

            private Target target;
            private Level level;
        }

        class ConsoleDebugLogger : Logger
        {
            // Calls the constructor of base class. 
            public ConsoleDebugLogger(Target target, Level level) : base(target, level)
            { }

            public override void log(string message)
            {
                string anotatedMsg = "CONSOLE: <DEBUG>" + message + "</DEBUG>";
                Console.WriteLine(anotatedMsg);
            }
        }

        class ConsoleReleaseLogger : Logger
        {
            // Calls the constructor of base class. 
            public ConsoleReleaseLogger(Target target, Level level) : base(target, level)
            { }

            public override void log(string message)
            {
                string anotatedMsg = "CONSOLE: <RELEASE>" + message + "</RELEASE>";
                Console.WriteLine(anotatedMsg);
            }
        }

        class FileDebugLogger : Logger
        {
            // Calls the constructor of base class. 
            public FileDebugLogger(Target target, Level level) : base(target, level)
            { }

            public override void log(string message)
            {
                string anotatedMsg = "FILE: <DEBUG>" + message + "</DEBUG>";
                Console.WriteLine(anotatedMsg);
            }
        }

        class FileReleaseLogger : Logger
        {
            // Calls the constructor of base class. 
            public FileReleaseLogger(Target target, Level level) : base(target, level)
            { }

            public override void log(string message)
            {
                string anotatedMsg = "FILE: <RELEASE>" + message + "</RELEASE>";
                Console.WriteLine(anotatedMsg);
            }
        }

        static void Main(string[] args)
        {
            Logger debugConsoleLogger = new ConsoleDebugLogger(Logger.Target.CONSOLE, Logger.Level.DEBUG);
            debugConsoleLogger.log("A debug message1 to console.");
            debugConsoleLogger.log("A debug message2 to console.");
            debugConsoleLogger.log("A debug message3 to console.");
            debugConsoleLogger.log("A debug message4 to console.");

            Logger releaseFileLogger = new FileReleaseLogger(Logger.Target.FILE, Logger.Level.RELEASE);
            releaseFileLogger.log("A release message1 to file.");
            releaseFileLogger.log("A release message2 to file.");
            releaseFileLogger.log("A release message3 to file.");
            releaseFileLogger.log("A release message4 to file.");
        }
    }
}
