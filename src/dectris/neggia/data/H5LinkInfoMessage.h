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

#ifndef H5LINKINFOMESSAGE_H
#define H5LINKINFOMESSAGE_H
#include "H5Object.h"

/// https://support.hdfgroup.org/HDF5/doc/H5.format.html#LinkInfoMessage


class H5LinkInfoMsg : public H5Object
{
public:
    H5LinkInfoMsg() = default;
    H5LinkInfoMsg(const char * fileAddress, size_t offset);
    H5LinkInfoMsg(const H5Object & other);
    constexpr static unsigned int TYPE_ID = 0x02;
    uint8_t getFlags() const;
    bool existsMaximumCreationIndex() const;
    uint64_t getFractalHeapAddress() const;
    uint64_t getBTreeAddress() const;


};

#endif // H5LINKINFOMESSAGE_H
