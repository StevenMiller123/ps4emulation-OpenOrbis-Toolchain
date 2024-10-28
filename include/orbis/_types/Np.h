#pragma once

#include <orbis/_types/rtc.h>
#include <stdint.h>

typedef struct OrbisNpTrophyDetails {
  size_t size; // this needs to be set with sizeof(OrbisNpTrophyDetails) or any
               // function that calls with this data will return a error
  int32_t TRPID;    // Trophy ID, 0-XXXX
  int32_t TRPGRADE; // Trophy Grade, EX: 1-Platinum, 2-Gold, 3-Silver, 4-Bronze
  int32_t GRPID;    // Trophy Group Id
  bool HiddenFromView;  // this determans if you can see the trophy before its
                        // unlocked
  char Unk02[3];        // Unkown data
  char TrophyName[128]; // Trophy Name, EX: "UNLOCK ME"
  char TrophyDetails[1024]; // Description, EX: "This is what needs to be
                            // unlocked"
} OrbisNpTrophyDetails;

typedef struct OrbisNpTrophyData {
  size_t size;     // this needs to be set with sizeof(OrbisNpTrophyData) or any
                   // function that calls with this data will return a error
  int32_t TRPID;   // Trophy ID, 0-XX for loarge scope trophy sets
  bool IsUnlocked; // flag that tells if the trophy is locked or unlocked
  char Unk00[3];   // Unkown
  OrbisRtcTick Timecode; // time when the Trophy was unlocked
} OrbisNpTrophyData;

typedef struct OrbisNpOnlineId {
  char data[16];  // account name, follows PSN schema, min 3/max 16
  char term;      // terminator, always '\0'?
  uint8_t UNK[3]; // Unkown, probably reserved?
} OrbisNpOnlineId;

typedef struct OrbisNpId {
  OrbisNpOnlineId handle; // online info
  uint8_t Unk20[8];       // could be uint64_t?
  uint8_t Unk28[8];       // could be uint64_t?
} OrbisNpId;
