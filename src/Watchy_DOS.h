#ifndef WATCHY_DOS_H
#define WATCHY_DOS_H

#include <Watchy.h>
#include "Squint.h"

class WatchyDOS : public Watchy{
    using Watchy::Watchy;
    public:
        void drawWatchFace();
};

#endif