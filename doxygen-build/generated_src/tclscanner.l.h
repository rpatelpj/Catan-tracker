static const char *stateToString(int state)
{
  switch(state)
  {
    case INITIAL: return "INITIAL";
    case ERROR: return "ERROR";
    case TOP: return "TOP";
    case COMMAND: return "COMMAND";
    case WORD: return "WORD";
    case COMMENT: return "COMMENT";
    case COMMENT_NL: return "COMMENT_NL";
    case COMMENT_CODE: return "COMMENT_CODE";
    case COMMENT_VERB: return "COMMENT_VERB";
    case COMMENTLINE: return "COMMENTLINE";
    case COMMENTLINE_NL: return "COMMENTLINE_NL";
  }
  return "Unknown";
}
