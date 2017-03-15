/**
MIT License

Copyright (c) 2017 DECTRIS Ltd.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef H5SYMBOLTABLENODE_H
#define H5SYMBOLTABLENODE_H
#include "H5Object.h"
#include "H5SymbolTableEntry.h"

/// https://www.hdfgroup.org/HDF5/doc/H5.format.html#SymbolTable

class H5SymbolTableNode : public H5Object
{
public:
   H5SymbolTableNode() = default;
   H5SymbolTableNode(const char * fileAddress, size_t offset);
   H5SymbolTableNode(const H5Object & other);
   int numberOfSymbols() const;
   H5SymbolTableEntry entry(int i) const;

};

#endif // H5SYMBOLTABLENODE_H
