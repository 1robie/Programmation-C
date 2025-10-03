# Itérations, aiguillage, fonctions

# Exercice n°1 : Affichage de caractères et de leur code ASCII

[Fait](exo1.c)

# Exercice n°2 : Devine un nombre

[Fait](exo2.c)

# Exercice n°3 : Lecture de caractères

1. Le problème qui survient est que le retour à la ligne est compté comme un caractère quand on utilise `%c` tout seul. Mais en rajoutant un ` ` devant, on peux maintenant faire un retour à la ligne sans qu'il le prenne en compte.

# Exercice n°4 : Menu

[Fait](exo4.c)

# Exercice n°5 : Passage par adresse

[Fait](exo5.c)

1. L’algorithme marche parce que les trois choix (0 = caillou, 1 = papier, 2 = ciseaux) forment un cycle.
   Chaque coup bat exactement celui qui le précède dans ce cycle :

- (0+1) mod 3 = 1 → papier bat caillou

- (1+1) mod 3 = 2 → ciseaux bat papier

- (2+1) mod 3 = 0 → caillou bat ciseaux

Ainsi, si J1 = (J2 + 1) mod 3, J1 est forcément le coup qui bat J2. Sinon, si ce n’est pas égal ni nul, c’est J2 qui gagne.