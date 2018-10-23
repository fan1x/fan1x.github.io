using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace cv3_2
{
    class Program
    {
        class Logger
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

            public Logger(Target target, Level level)
            {
                this.target = target;
                this.level = level;
            }

            public void log(string message)
            {
                string msgWithLevel = anotateMessageAccordingLevel(level, message);
                string msgWithLevelAndTarget = anotateMessageAccordingTarget(target, msgWithLevel);
                Console.WriteLine(msgWithLevelAndTarget);
            }

            private static string anotateMessageAccordingTarget(Target target, string message)
            {
                switch (target)
                {
                    case Target.FILE:
                        return "FILE: " + message;
                        break;
                    case Target.CONSOLE:
                        return "CONSOLE: " + message;
                        break;
                    case Target.NONE:
                        return "";
                        break;
                    default:
                        return message;
                        break;
                }
            }

            private static string anotateMessageAccordingLevel(Level level, string message)
            {
                switch (level)
                {
                    case Level.DEBUG:
                        return "<DEBUG>" + message + "</DEBUG>";
                        break;
                    case Level.RELEASE:
                        return "<RELEASE>" + message + "</RELEASE>";
                        break;
                    default:
                        return message;
                        break;
                }
            }

            private Target target;
            private Level level;
        }

        static void Main(string[] args)
        {
            Logger debugConsoleLogger = new Logger(Logger.Target.CONSOLE, Logger.Level.DEBUG);
            debugConsoleLogger.log("A debug message1 to console.");
            debugConsoleLogger.log("A debug message2 to console.");
            debugConsoleLogger.log("A debug message3 to console.");
            debugConsoleLogger.log("A debug message4 to console.");

            Logger releaseFileLogger = new Logger(Logger.Target.FILE, Logger.Level.RELEASE);
            releaseFileLogger.log("A release message1 to file.");
            releaseFileLogger.log("A release message2 to file.");
            releaseFileLogger.log("A release message3 to file.");
            releaseFileLogger.log("A release message4 to file.");
        }
    }
}