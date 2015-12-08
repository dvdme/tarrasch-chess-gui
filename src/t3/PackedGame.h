/****************************************************************************
 * Pack a complete game into a single std::string
 *  Author:  Bill Forster
 *  License: MIT license. Full text of license is in associated file LICENSE
 *  Copyright 2010-2015, Bill Forster <billforsternz at gmail dot com>
 ****************************************************************************/
#ifndef PACKED_GAME_H
#define PACKED_GAME_H

#include "CompactGame.h"

class PackedGame
{
private:
    std::string fields;
    //std::vector<char> fields;
    
public:
    bool Empty() { return fields.size() == 0; }
    void Pack( CompactGame &pact );
    void Pack( Roster &r, std::string &blob );
    void Unpack( CompactGame &pact );
    void Unpack( Roster &r, std::string &blob );
    void Unpack( Roster &r );
    void Unpack( std::string &blob );
    const char *White();
    const char *Black();
    const char *Event();
    const char *Site();
    const char *Result();
    const char *Round();
    const char *Date();
    const char *Eco();
    const char *WhiteElo();
    const char *BlackElo();
    const char *Fen();
    const char *Blob();
private:
    const char *GetField( int field_nbr );
};

#endif // PACKED_GAME_H
