# CPP Modules (CPP00 → CPP09)

[![C++](https://img.shields.io/badge/C%2B%2B-98-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](#)
[![Build](https://img.shields.io/badge/build-Makefile-success?style=for-the-badge)](#)
[![School 42](https://img.shields.io/badge/42-CPP%20Modules-black?style=for-the-badge&logo=42&logoColor=white)](#)
[![License](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)](#)

> Une vitrine structurée et professionnelle de mon parcours d’apprentissage du C++ à travers les **modules historiques de l’école 42 (CPP00 → CPP09)**.  
> Concepts couverts : **POO**, **gestion de la mémoire**, **exceptions**, **templates**, **STL**, **algorithmie avancée**, le tout en **C++98** avec compilation stricte.

---

## 📑 Table des matières

- [🎯 Aperçu](#-aperçu)
- [📁 Structure du dépôt](#-structure-du-dépôt)
- [🧩 Détail des modules](#-détail-des-modules)
  - [CPP00 → CPP04 : Le cœur de la POO](#cpp00--cpp04--le-cœur-de-la-poo)
  - [CPP05 → CPP08 : Mécanismes avancés & Templates](#cpp05--cpp08--mécanismes-avancés--templates)
  - [CPP09 : STL & algorithmie (Ford–Johnson)](#cpp09--stl--algorithmie-fordjohnson)
- [🧠 Analyse approfondie : Ford–Johnson & Jacobsthal (CPP09)](#-analyse-approfondie--fordjohnson--jacobsthal-cpp09)
  - [1) Logique de l’algorithme Ford–Johnson (Merge-Insertion Sort)](#1-logique-de-lalgorithme-fordjohnson-merge-insertion-sort)
  - [2) Pourquoi la suite de Jacobsthal ?](#2-pourquoi-la-suite-de-jacobsthal-)
  - [Ordre d’insertion concret](#ordre-dinsertion-concret)
- [🛠️ Compilation & Exécution](#️-compilation--exécution)
- [📐 Normes de codage](#-normes-de-codage)
- [🤝 Contribuer](#-contribuer)

---

## 🎯 Aperçu

Ce dépôt rassemble mes solutions pour les modules **CPP00 à CPP09** de l’école **42**.  
Le cursus impose une transition rigoureuse du paradigme procédural en C vers une approche **orientée objet** et **générique**, avec une attention particulière portée à :

- l’architecture et la conception (classes, héritage, polymorphisme),
- la gestion stricte des ressources (construction/copie/destruction),
- l’utilisation maîtrisée de la STL,
- l’écriture de code robuste (exceptions),
- la programmation générique (templates),
- et l’algorithmie avancée (dont Ford–Johnson).

---

## 📁 Structure du dépôt

```text
CPP/
├── CPP00/
│   ├── ex00/
│   ├── ex01/
│   └── ...
├── CPP01/
│   ├── ex00/
│   └── ...
├── ...
└── CPP09/
    ├── ex00/
    ├── ex01/
    └── ex02/
```

> Chaque exercice contient un **Makefile autonome** et suit une compilation stricte.

---

## 🧩 Détail des modules

### CPP00 → CPP04 : Le cœur de la POO

#### 🔹 CPP00 : Introduction aux bases du C++
**Concepts :** namespaces, flux I/O (`std::cin`, `std::cout`), `std::string`, premières classes.

**Exercices clés :**
- **ex01 (PhoneBook)** : annuaire en CLI, encapsulation, visibilité `public/private`.
- **ex02 (The Account)** : analyse de logs, rétro-ingénierie, introduction aux membres/fonctions `static`.

---

#### 🔹 CPP01 : Allocation mémoire & Références
**Concepts :** `new/delete`, stack vs heap, cycle de vie objet, streams fichiers.

**Exercices clés :**
- **ex00 / ex01 (Zombie)** : allocation pile vs tas.
- **ex03 (Weapon)** : usage des références pour limiter les copies.
- **ex04 (Sed is for losers)** : traitement de chaînes + fichiers en C++ standard.

---

#### 🔹 CPP02 : Virgule fixe & Forme canonique
**Concepts :** surcharge d’opérateurs, représentation en virgule fixe, *forme canonique orthodoxe* (Rule of 3).

**Exercices clés :**
- **ex00 → ex02** : classe de calcul en virgule fixe + surcharge complète des opérateurs (arithmétique, comparaison, incrémentation).

---

#### 🔹 CPP03 : Héritage
**Concepts :** héritage simple, chaîne constructeurs/destructeurs, diamant/héritage multiple.

**Exercices clés :**
- **ex00 → ex02 (ClapTrap, ScavTrap, FragTrap)** : hiérarchie de robots.
- **ex03 (DiamondTrap)** : résolution du problème du diamant via héritage virtuel (`virtual`).

---

#### 🔹 CPP04 : Polymorphisme & classes abstraites
**Concepts :** polymorphisme dynamique, fonctions virtuelles, destructeurs virtuels, interfaces/classes abstraites.

**Exercices clés :**
- **ex01 / ex02 (Brain & Animals)** : copie profonde (*deep copy*) d’objets contenant des pointeurs.
- **ex03 (Materia)** : inventaire RPG (interfaces pures + polymorphisme).

---

### CPP05 → CPP08 : Mécanismes avancés & Templates

#### 🔹 CPP05 : Exceptions & “Bureaucratie”
**Concepts :** gestion d’erreurs via `try/catch`, exceptions custom (`std::exception`).

**Exercices clés :**
- **ex00 → ex03** : hiérarchie de formulaires (validation signature/exécution + exceptions).

---

#### 🔹 CPP06 : Conversions de types (Casting) & RTTI
**Concepts :** cast explicite, identification de type à l’exécution.

**Exercices clés :**
- **ex00** : parsing/conversion de littéraux (`char`, `int`, `float`, `double`).
- **ex01** : sérialisation/désérialisation via `reinterpret_cast`.
- **ex02** : identification de types dérivés via `dynamic_cast` (pointeurs vs références).

---

#### 🔹 CPP07 : Templates
**Concepts :** programmation générique, fonctions/classes paramétrées.

**Exercices clés :**
- **ex01 (iter)** : itération générique sur tableau + fonction callback.
- **ex02 (Array)** : tableau générique gérant son allocation en sécurité.

---

#### 🔹 CPP08 : STL
**Concepts :** conteneurs (`vector`, `list`, `map`), itérateurs, algorithmes (`find`, `transform`, …).

**Exercices clés :**
- **ex01 (Span)** : calcul du plus petit/grand écart via itérateurs.
- **ex02 (MutantStack)** : rendre `std::stack` itérable via itérateurs du conteneur sous-jacent.

---

### CPP09 : STL & algorithmie (Ford–Johnson)

> Contrainte : utiliser au moins **un conteneur STL différent par exercice**, et éviter certains conteneurs selon l’énoncé.

**Exercices :**
- **ex00 (Bitcoin Exchange)**  
  Évaluation d’un portefeuille à une date donnée. Utilisation efficace de `std::map` et `lower_bound/upper_bound` pour trouver la date la plus proche.
- **ex01 (RPN)**  
  Calculateur en notation polonaise inversée via `std::stack`.
- **ex02 (PmergeMe)**  
  Tri d’entiers via **Ford–Johnson (merge-insertion)** + comparaison de performance entre deux conteneurs (ex. `std::vector` vs `std::deque`) jusqu’à ~10 000 éléments.

---

## 🧠 Analyse approfondie : Ford–Johnson & Jacobsthal (CPP09)

L’exercice **PmergeMe** est le défi algorithmique le plus complexe : trier une séquence en effectuant **un minimum de comparaisons** (proche de l’optimum théorique).

### 1) Logique de l’algorithme Ford–Johnson (Merge-Insertion Sort)

**Étape A — Paires & tri initial**
- Si la taille est impaire : on isole le dernier élément (*straggler*).
- On forme des paires.
- Dans chaque paire : on met le plus grand à gauche (**majeur**) et le plus petit à droite (**mineur**).

**Étape B — Tri récursif des majeurs**
- On extrait la suite des majeurs **A** et la suite des mineurs **B**.
- On trie **A** récursivement.
- Les éléments de **B** suivent les mouvements associés pour préserver les paires.

À la fin :
- `A = [a1 < a2 < ... < an]`
- chaque `bi` reste associé à `ai` avec `bi < ai`.

**Étape C — Insertion optimisée via Jacobsthal**
- `b1` est forcément `< a1` → insertion en tête **sans comparaison**.
- Le reste de `B` est inséré **par blocs**, dans un ordre optimisé.

---

### 2) Pourquoi la suite de Jacobsthal ?

Suite définie par :
- `J0 = 0`, `J1 = 1`
- `Jn = Jn-1 + 2*Jn-2`

Premiers termes :
`0, 1, 1, 3, 5, 11, 21, 43, 85, 171...`

**Intuition :** lors de l’insertion via recherche binaire, on veut garder des bornes proches de `2^k - 1` pour limiter le pire cas.  
Jacobsthal donne des *pivots d’insertion* qui optimisent la taille des zones de recherche et économisent des comparaisons.

---

### Ordre d’insertion concret

On part de `J3 = 3` :

1. `b1` : insertion “gratuite” (0 comparaison)
2. `Jacob = 3` : insérer `b3`, puis `b2` → ordre : `b3`, `b2`
3. `Jacob = 5` : insérer `b5`, puis `b4` → ordre : `b5`, `b4`
4. `Jacob = 11` : `b11, b10, b9, b8, b7, b6`
5. etc.

Si un *straggler* avait été isolé (taille impaire), il est inséré à la fin via recherche binaire “classique”.

---

## 🛠️ Compilation & Exécution

Chaque exercice intègre un **Makefile strict et autonome**.

### Exemple : compiler `PmergeMe` (CPP09/ex02)

```bash
cd CPP09/ex02
make
```

### Exécuter avec une suite de nombres

```bash
./PmergeMe 3 5 9 7 4 2 1 10 8 6
```

### Nettoyer

```bash
make fclean
```

---

## 📐 Normes de codage

- **Standard :** C++98 (les fonctionnalités C++11+ sont proscrites : `auto`, `nullptr`, `shared_ptr`, range-based loops, etc.).
- **Compilation stricte :**
  - `-Wall -Wextra -Werror -std=c++98`
- **Ressources :**
  - aucune fuite mémoire tolérée (vérifications type Valgrind / leaks),
  - pas de variables globales.

---

## 🤝 Contribuer

Questions, remarques, ou discussions sur des points (ex. **Ford–Johnson**, **MutantStack**, etc.) :
- ouvre une **issue**,
- ou propose une **pull request**.

---

> Ce dépôt reflète mon apprentissage rigoureux de la POO et de l’algorithmie chez 42, avec une exigence forte sur la qualité, les contraintes et la compréhension des mécanismes C++.
