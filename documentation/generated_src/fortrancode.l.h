static const char *stateToString(int state)
{
  switch(state)
  {
    case INITIAL: return "INITIAL";
    case Start: return "Start";
    case SubCall: return "SubCall";
    case FuncDef: return "FuncDef";
    case ClassName: return "ClassName";
    case ClassVar: return "ClassVar";
    case Subprog: return "Subprog";
    case DocBlock: return "DocBlock";
    case Use: return "Use";
    case UseOnly: return "UseOnly";
    case Import: return "Import";
    case Declaration: return "Declaration";
    case DeclarationBinding: return "DeclarationBinding";
    case DeclContLine: return "DeclContLine";
    case Parameterlist: return "Parameterlist";
    case String: return "String";
    case Subprogend: return "Subprogend";
  }
  return "Unknown";
}
