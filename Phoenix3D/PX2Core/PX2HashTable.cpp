/*
*
* �ļ�����	��	PX2HashTable.cpp
*
*/

#include "PX2HashTable.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
// UIntHashCoder
//----------------------------------------------------------------------------
unsigned int UIntHashCoder::operator () (unsigned int i) const
{
	return i; 
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// FixedStringHashCoder
//----------------------------------------------------------------------------
int64_t FixedStringHashCoder::operator () (const FString &str) const
{
	return (int64_t)(str.GetHandle());
}
//----------------------------------------------------------------------------