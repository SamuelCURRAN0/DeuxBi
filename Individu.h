/**
 * @file Individu.h
 * @author Philippe Lopisteguy (you@domain.com)
 * @brief Specifie une classe individu en relation
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief Cette classe définie un Individu par un nom un prénom et éventuellement une voiture qu'il conduit
 * 
 * @details au dela de reprensté un Individu par son nom et prenom la classe Individu 
 * permet également de renseigner la voiture q'uil conduit
 * 
 * La voiture reprentré par un pointeur qui peut etre nul si l'individu ne possede pas de Voiture.
 * 
 * @warning L'individu ne peut avoir qu'une voiture
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;     
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;     
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
  /**
   * @brief Construit un nouveau objet Individu, construit a partir du nom et prénom
   * 
   */
    // Constructeur
    Individu(string = "", string = "");
    // destructeur
    /**
     * @brief Detruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief retourne une chaine sous la forme nom et prénom
     * 
     * @return string 
     * 
     * @bug un espace en trop
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la voiture conduite par l'Individu
     * 
     * @param in voiture Pointeur de la voiture conduite
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H