static const char *stateToString(int state)
{
  switch(state)
  {
    case INITIAL: return "INITIAL";
    case Bases: return "Bases";
    case ParseType: return "ParseType";
    case ParseFuncProto: return "ParseFuncProto";
    case ParseComponent: return "ParseComponent";
    case ParsePackage: return "ParsePackage";
    case ParseProcessProto: return "ParseProcessProto";
    case ClassName: return "ClassName";
    case PackageName: return "PackageName";
    case ClassVar: return "ClassVar";
    case ClassesName: return "ClassesName";
    case Map: return "Map";
    case End: return "End";
    case Body: return "Body";
  }
  return "Unknown";
}
