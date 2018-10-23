using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Prg2
{
    class Program
    {
        enum Target
        {
            FILE,
            CONSOLE,
            NONE
        }

        enum Level
        {
            DEBUG,
            RELEASE,
        }

        static string anotateMessageAccordingTarget(Target target, string message)
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

        static string anotateMessageAccordingLevel(Level level, string message)
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

        static void log1(Level level, Target target, string message)
        {
            string msgWithLevel = anotateMessageAccordingLevel(level, message);
            string msgWithLevelAndTarget = anotateMessageAccordingTarget(target, msgWithLevel);
            Console.WriteLine(msgWithLevelAndTarget);
        }

        static void Main(string[] args)
        {
            log1(Level.DEBUG, Target.CONSOLE, "A debug message to console.");
            log1(Level.RELEASE, Target.CONSOLE, "A release message to console.");
            log1(Level.DEBUG, Target.FILE, "A debug message to file.");
            log1(Level.RELEASE, Target.FILE, "A release message to file.");
            log1(Level.DEBUG, Target.NONE, "A debug message to void.");
            log1(Level.RELEASE, Target.NONE, "A release message to void.");
        }
    }
}