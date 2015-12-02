#include <cstdlib>
#include "Link.h"

namespace prog8lib
{
  /*
   * constructor member function sets letter to l and next to n
   * @param l the character stored in the link
   * @param n the pointer to the next item in the Trie
   */
  Link::Link(char l, TrieNode *n):letter(l), next(n)
  {
   
  }
  
  /*
   * destructor function not needed for this class
   */
  Link::~Link()
  {
  
  }
}
