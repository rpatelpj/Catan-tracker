static const char *stateToString(int state)
{
  switch(state)
  {
    case INITIAL: return "INITIAL";
    case PreStart: return "PreStart";
    case Start: return "Start";
    case SkipComment: return "SkipComment";
    case SkipInvalid: return "SkipInvalid";
    case GetString: return "GetString";
    case GetBool: return "GetBool";
    case GetStrList: return "GetStrList";
    case GetStrList1: return "GetStrList1";
    case GetQuotedString: return "GetQuotedString";
    case GetEnvVar: return "GetEnvVar";
    case Include: return "Include";
  }
  return "Unknown";
}
