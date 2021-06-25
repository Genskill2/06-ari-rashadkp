#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


string
ari (string new)
{
  int chara_count = 0;
  int sentence_count = 0;
  int word_count = 0;
  float readability_index = 0;
  for (int i = 0; i < strlen (new); i++)
    {

      if (new[i] == '.' || new[i] == '?' || new[i] == '!')
	{
	  sentence_count += 1;
	}

      if (isalnum (new[i]) != 0)
	{
	  chara_count += 1;
	}
      if (isspace (new[i]) != 0)
	{
	  word_count += 1;

	}
    }
  readability_index =
    ((4.71 * (float) chara_count) / (float) word_count) +
    ((0.5 * (float) word_count) / (float) sentence_count) - 21.43;


  if (readability_index != (int) readability_index)
    {
      readability_index = readability_index + 1;
    }
  readability_index = (int) readability_index;
  switch ((int) readability_index)
    {

    case 1:
      return "Kindergarten";
    case 2:
      return "First/Second Grade";
    case 3:
      return "Third Grade";
    case 4:
      return "Fourth Grade";
    case 5:
      return "Fifth Grade";
    case 6:
      return "Sixth Grade";
    case 7:
      return "Seventh Grade";
    case 8:
      return "Eighth Grade";
    case 9:
      return "Ninth Grade";
    case 10:
      return "Tenth Grade";
    case 11:
      return "Eleventh Grade";
    case 12:
      return "Twelfth grade";
    case 13:
      return "College student";
    case 14:
      return "Professor";

    }


}
