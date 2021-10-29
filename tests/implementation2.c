#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "arbreprefixe.h"
#include "lecture.h"
#include <assert.h>


int main(int argc, char **argv){
  char * dico;
  char* texte;
  assert(argc==3);
  dico = strdup(argv[1]);
  texte = strdup(argv[2]);
  arbreprefixe_t a = creer_arbre();
  printf("%s %s\n",dico,texte);
  construct_dico(dico,&a);
  //verif_ortho(a,texte);
  arbre_delete(a);
  return EXIT_SUCCESS;
}
