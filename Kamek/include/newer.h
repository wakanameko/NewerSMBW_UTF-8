#ifndef NEWER_H
#define NEWER_H 

extern int lastLevelIDs[];

// edited by wakanameko base txt is here: void WriteAsciiToTextBox(nw4r::lyt::TextBox *tb, const wchar_t *source);
void WriteAsciiToTextBox(nw4r::lyt::TextBox *tb, const wchar_t *source);

int getUnspentStarCoinCount();
int getStarCoinCount();
void getNewerLevelNumberString(int world, int level, wchar_t *dest);


#endif /* NEWER_H */
