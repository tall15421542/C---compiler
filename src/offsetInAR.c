#include <stdio.h>
#include "offsetInAR.h"
#include "symbolTable.h"

int g_offsetForPara = 16;
int g_offsetInARAux = 0;
int g_deepestBlockVariableOffset = 0;


void resetOffsetCalculation()
{
    g_offsetInARAux = 0;
    g_deepestBlockVariableOffset = 0;
	g_offsetForPara = 16;
}

void setOffsetAndUpdateGlobalOffset_para(SymbolAttribute * attribute){
	attribute->offsetInAR = g_offsetForPara;
	int variableSize = getVariableSize(attribute->attr.typeDescriptor);
	g_offsetForPara = g_offsetForPara + variableSize;
}

void setOffsetAndUpdateGlobalOffset(SymbolAttribute* attribute)
{
    int variableSize = getVariableSize(attribute->attr.typeDescriptor);
    g_offsetInARAux = g_offsetInARAux - variableSize;
    attribute->offsetInAR = g_offsetInARAux;
}
