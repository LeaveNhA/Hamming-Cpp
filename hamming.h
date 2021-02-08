#define EXERCISM_RUN_ALL_TESTS

#include <string>

namespace hamming
{
  unsigned int compute(const std::string left_dna,
                             const std::string right_dna)
  {
    if(left_dna.length() != right_dna.length())
      throw std::domain_error("DNA samples doesn't fit!");

    unsigned int number_difference = 0;

    for(unsigned int x = 0;
        x < left_dna.length();
        x++)
      {
        if(left_dna.at(x) != right_dna.at(x))
          number_difference++;
      }

    return number_difference;
  }
}
