static const char *stateToString(int state)
{
  switch(state)
  {
    case INITIAL: return "INITIAL";
    case Start: return "Start";
    case Template: return "Template";
    case ReadArgs: return "ReadArgs";
    case Operator: return "Operator";
    case FuncPtr: return "FuncPtr";
    case EndTemplate: return "EndTemplate";
    case StripTempArgs: return "StripTempArgs";
    case SkipSharp: return "SkipSharp";
    case ReadExceptions: return "ReadExceptions";
  }
  return "Unknown";
}
