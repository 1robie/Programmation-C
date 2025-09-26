# Clarence Héritier

# Exercice 1. Compilation, création dun exécutable

3. `clang Exo_1_Compilation.c -o exo` puis `./exo`

on obtient notre fichier exo en tant qu'executable

4. 
Pour voir les droits on fait `ls -l` cela nous donne un truc de ce genre :
```
total 272
-rwxr-xr-x 1 clarence.heritier 25_malimi-1  16544 26 sept. 14:50 a.out
-rwxr-xr-x 1 clarence.heritier 25_malimi-1  16544 26 sept. 14:50 exo
-rw-r--r-- 1 clarence.heritier 25_malimi-1     91 26 sept. 14:48 Exo_1_Compilation.c
-rw-r--r-- 1 clarence.heritier 25_malimi-1     55 26 sept. 14:49 exo.md
-rw-r--r-- 1 clarence.heritier 25_malimi-1    619 26 sept. 14:42 moyenne.c
-rw-r--r-- 1 clarence.heritier 25_malimi-1 221258 26 sept. 14:41 TP_1_-_Variables_Instructions_Conditionnelles.pdf
```
 u  g  o
rwxrwxrwx

r = read
w = write 
x = execute

Sont droit est l'exectution. Car c'est un fichier crée à partir d'un fichier c.

6. Pour donner le nom CV à l'executable on fait `mv exo CV`

# Exercice n°2

[Fait](./moyenne.c)

# Exercice n°3 : Nombre entier vs nombre décimal

- On utilise le cast afin de convertir un `float` en `int` ce qui supprime la partie décimale.
- Exemple: `2.2` converti en `int` devient `2`.
- Cela montre que `2.2` (float) n'est pas égal à `2` (int).



# Exercice n°4, FizzBuzz:

[Fait](./exo4.c)

# Exercice n°5, Mise sous la forme siècles, années, mois, jours d’une durée:

[Fait](./exo5.c)