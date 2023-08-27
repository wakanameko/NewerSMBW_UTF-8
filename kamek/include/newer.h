#ifndef NEWER_H
#define NEWER_H

#include <game.h>

extern int lastLevelIDs[];

void WriteAsciiToTextBox(nw4r::lyt::TextBox *tb, const char *source);
/*extern "C" */void WriteUnicodeToTextBox(nw4r::lyt::TextBox *tb, const wchar_t *source);

int getUnspentStarCoinCount();
int getStarCoinCount();
void getNewerLevelNumberString(int world, int level, wchar_t *dest);


#endif /* NEWER_H */
