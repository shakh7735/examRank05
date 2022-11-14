#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main()
{

    // Warlock bob;                            //Does not compile
    // Warlock bob("Bob", "the magnificent");  //Compiles
    // Warlock jim("Jim", "the nauseating");   //Compiles
    // bob = jim;                              //Does not compile
    // Warlock jack(jim);                      //Does not compile

  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);

  return (0);
}