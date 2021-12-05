#include "arbreradix.h"


int main(){
  printf("%d\n",estprefixe("mot","motisma"));
  arbreradix_t a =arbreradix_new();
  inserer_mot_radix(&a,"salut");
  arbreradix_t p=a;
  printf("%s\n",p->alp[0]->radix);
  p=p->alp[0];
  printf("%s\n",p->alp[0]->radix);
  p=p->alp[0];
  printf("%s\n",p->alp[0]->radix);
  p=p->alp[0];
  printf("%s\n",p->alp[0]->radix);
  p=p->alp[0];
  printf("%s\n",p->alp[0]->radix);
  printf("Compteur %d\n",p->compteurfils);
  compresser_arbre(&a);
  printf("%d\n",recherche_mot_radix(a,"salutation"));
  printf("Cond dd %d\n",estprefixe("salut","salut"));
  printf("%d\n",recherche_mot_radix(a,"bonjour"));
  return EXIT_SUCCESS;
}
