################################# Exercice 1 #################################
Dans cet exercice nous allons voir comment utiliser les entrées/sorties dans un
code C++.

1) a)
    Ce programme permet de saisir un ensemble d'entiers qui seront chargés
    dans un tableau et dont certains éléments seront (ou non) déplacés avec des
    fonctions d'echange utilisant différente déclaration (mécanisme de
    surcharge).

    Lorsque nous avons écrit les fonctions d'échange par références et par
    valeurs, nous avons remarquer que les prototypes de ces fonctions sont les
    mêmes.
    Ainsi, lors de la compilation, le compilateur ne sait pas si il doit
    utiliser la fonction de passage par références ou par valeurs lors de la
    surcharge.
    Nous avons donc résolu se problème en déclarant la fonction d'échange par
    valeurs dans un autre espace de nom ("nok" car l'echange par valeur ne peut
    fonctionner).

################################# Exercice 2 #################################
Voir code source



################################# Exercice 3 #################################
Ressemblant fortement à l'exercice précedent, nous avons, d'un commun accord
avec Mr. LEBRET, passé cet exercice.



################################# Exercice 4 #################################
Si la variable est déclarée comme static, elle est créée à l'execution du
programme et non pas lors de l'appel de la fonction. La fonction peut alors sans
risque retourner une référence à cette variable car elle ne sera pas désallouée
à la sortie de la fonction.



################################# Exercice 5 #################################
5) a)
    Lors de l'appel à la fonction "foo", le compilateur ne peut trouver la
    fonction "appliqueTVA" car elle est déclarée dans un autre bloc et sa portée
    ne lui permet pas d'être accessible par "foo". Le compilateur ne voit alors
    que la fonction "appliqueTVA" dont le parametre est un pointeur (et non pas
    une référence comme le suggère l'appel de la fonction).

5) b)
    En ajoutant "::" devant "appliqueTVA" à la ligne 14 permet donc de donner à
    cette déclaration une portée globale.
    Le compilateur est alors en mesure de choisir la fonction a appeler par le
    mécanisme de surcharge.

################################### Remarque ##################################
Veuillez vous reporter au fichier Trace.txt pour avoir la trace d'execution du
programme TP1 commenté.
