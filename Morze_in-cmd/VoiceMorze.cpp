#include "VoiceMorze.h"

void voiceSpace()
{
  Beep(550, 350);

  Sleep(30);    // Duration
  Beep(550, 100);

  Sleep(30);
  Beep(550, 100);

  Sleep(30);
  Beep(550, 100);

  Sleep(30);
  Beep(550, 350);


  Sleep(100);
}


void voiceA()
{
  Beep(550, 100);
  Sleep(30);    // Duration
  Beep(550, 350);

  Sleep(50);
}

void voiceAuto(string text)
{
  for (int i = 0; i < text.length(); i++)
  {
    if (text[i] == '.')
    {
      Beep(550, 100);
    }
    else if (text[i] == '-')
    {
      Beep(550, 350);
    }

  }

  Sleep(100);
}


