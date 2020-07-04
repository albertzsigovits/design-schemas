#include <idc.idc>
static main(void)
{
    auto currentEA;
    auto currentMnem;
    auto prevMnem;
    auto currentOp;
    prevMnem = "";
    currentOp;

    currentEA = FirstSeg();
    currentEA = NextHead(currentEA, 0xFFFFFFFF);
    while (currentEA != BADADDR)
    {
        currentMnem = GetMnem(currentEA);

       //Highlight call functions
       if (currentMnem == "call")
       {
           SetColor(currentEA, CIC_ITEM, 0x1e1e1e);
       }
    }
}
