// Copyright 2013, Zaoqibu Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Zaoqibu Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: vwarship@163.com (Junjian Wang)
//
// The Optical Character Recognition (OCR Style)

#ifdef IMAGEPROCESS_EXPORTS
#define IMAGEPROCESS_API __declspec(dllexport)
#else
#define IMAGEPROCESS_API __declspec(dllimport)
#endif

class ImageProcess
{
public:
    virtual ~ImageProcess(){};
    virtual bool LoadImage(const char *filename) = 0;
    virtual void Deskew() = 0;
    virtual double SkewAngle() = 0;
    virtual void Rotate(double angle) = 0;
    virtual void TransformToGrayscale() = 0;
    virtual void RotateWithGrayscale(double angle) = 0;
    virtual void Save(const char *filename) = 0;

};

IMAGEPROCESS_API ImageProcess* NewImageProcess();
IMAGEPROCESS_API void DeleteImageProcess(ImageProcess *imageProcess);

