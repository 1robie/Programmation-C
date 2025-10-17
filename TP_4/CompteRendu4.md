# Utilisation de tableaux

# Exercice 1:

1)

Sans utiliser srand():

1. Premier lancer :
```
3
6
17
15
13
15
6
12
9
1
2
7
10
19
3
6
0
6
12
16
```
2. Deuxième lancer:
```
3
6
17
15
13
15
6
12
9
1
2
7
10
19
3
6
0
6
12
16
```

Maintenant avec srand(time(NULL)):
1. Premier lancer :
```
2
14
8
0
12
14
12
14
6
14
1
0
8
19
11
14
18
5
9
3
7
```
2. Deuxième lancer :
```
8
16
7
16
7
13
1
12
1
16
3
7
8
5
11
12
3
1
0
19
```
Expliquer pourquoi, en cours de développement, il peut être intéressant de ne pas modifier
la graine à chaque exécution.

> Lorsque la graine n'est pas modifiée, le générateur de nombres aléatoires produit la même séquence de nombres à chaque exécution du programme. Cela permet aux développeurs de tester et de déboguer leur code de manière cohérente, car ils peuvent reproduire les mêmes conditions à chaque fois. Si la graine était modifiée à chaque exécution, les résultats seraient différents à chaque fois, rendant le débogage plus difficile.

2)
Écrire une fonction `void initAlea(int tab[], int taille, int max)` qui remplit les
taille premières cases du tableau tab avec des entiers positifs aléatoires inférieurs à max.

[exo1](./exo1.c)

# Exercice 2. Recherche d’un entier dans un tableau

Ecrire une fonction int position(int tab[], int taille, int elt); prenant en arguments un tableau, sa taille et un entier elt. Celle-ci renverra l’indice de la première occurrence
de elt dans le tableau tab si elt apparaît dans les taille premiers éléments de tab et −1
sinon.

[exo2](./exo2.c)

# Exercice 3. Somme de deux tableaux

On définit la somme S = A + B de deux tableaux A et B de même taille N comme étant le
tableau S de N entiers définit par :
∀i ∈ [[0; N − 1]], S[i] = A[i] + B[i]
Écrire une fonction somme recevant en arguments trois tableaux A, B et S, ainsi que leur taille
commune. À la sortie de somme, le tableau S contiendra la somme des tableaux A et B.

[exo3](./exo3.c)

# Exercice 4. Somme de plusieurs tableaux

On définit la somme S = A0+ · · · + AM-1 de M tableaux de même taille N comme étant le tableau
S de N entiers définit par :
∀i ∈ [[0; N − 1]], S[i] = A0[i] + · · · + AM-1[i]
Modifier la fonction somme écrite précédemment pour qu’elle reçoive en arguments un tableau
à deux dimensions à la place des tableaux A et B. On devra également donner en argument
le nombre des tableaux sur lesquels on calcule la somme. Pour préciser la taille de la seconde
dimension du tableau à deux dimensions dans les paramètres de la fonction, vous pourrez définir
une constante globale N qui sera la taille maximale autorisée.

[exo4](./exo4.c)

# Exercice 5. Histogramme

Écrire une fonction
void histogramme(int tab[][N], int nb_tab, int taille, int n_max, int histo[])
qui reçoit un tableau tab de nb_tab tableaux de taille entiers compris entre 0 et n_max - 1,
ainsi qu’un tableau histo de nb_tab * n_max + 1 entiers. Le tableau histo devra représenter,
après l’appel de la fonction, l’histogramme de la somme tab[0] + ... + tab[nb_tab - 1] :
pour tout i∈ [[0;nb_tab * n_max]], histo[i] sera donc le nombre de valeurs égales à i dans le
tableau tab[0] + · · · + tab[nb_tab-1].

[exo5](./exo5.c)

# Exercice 6. Main

Si ce n’est pas déjà fait, écrire une fonction main() utilisant les fonctions précédentes :
• remplissage aléatoire de trois tableaux de tailles 20 contenant des entiers entre 0 et 5 ;
• calcul et affiche l’histogramme de la somme de ces tableaux.
```
Random Array:
>37
>43
>12
>41
>10
>37
>35
>5
>30
>25
>49
>27
>19
>36
>48
>45
>4
>7
>13
>0
>20
>31
>44
>34
>49
>34
>42
>3
>14
>24
>19
>1
>20
>31
>45
>30
>19
>32
>35
>49
>7
>35
>26
>26
>23
>25
>23
>29
>34
>36
>29
>4
>17
>25
>41
>18
>10
>35
>24
>24
>10
>43
>28
>32
>24
>25
>12
>45
>7
>49
>46
>16
>36
>23
>44
>9
>0
>17
>38
>36
>3
>19
>41
>23
>47
>34
>41
>7
>19
>17
>33
>31
>10
>13
>13
>37
>38
>25
>34
>47

Arrays :
Array n°1: 5 5 1 1 0 5 1 2 0 3 2 2 3 3 3 2 5 2 1 1 
Array n°2: 0 0 4 0 0 4 1 0 5 2 2 4 1 1 0 5 5 5 1 5 
Array n°3: 0 1 5 3 5 2 5 2 3 0 1 3 5 0 1 5 2 3 5 1 

Print of histogramme (0 à 15):
Somme 4 : 4 occ
Somme 5 : 4 occ
Somme 6 : 1 occ
Somme 7 : 3 occ
Somme 8 : 1 occ
Somme 9 : 2 occ
Somme 10 : 2 occ
Somme 11 : 1 occ
Somme 12 : 2 occ
```