#ifndef OUTILS_H
#define OUTILS_H

#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

// PARTIE SUR LES TEXTES

std::string supprimerAccents(std::string message);   // Supprime tous les accents du message
std::string metttreMaj(std::string message);    // Met tout le texte en majuscules
std::string jolitexte(std::string texte);   // Met tout le texte en minucules et met des majuscules au début des phrase
std::string garderLettres(std::string message); // Ne garde que les lettres d'un messga

int indexFromString(std::string texte, char caractere);

double index_of_coincidence(std::string texte); // Calcule l'index of coincidence d'un texte

char addl(char l, char l2 );   // Additionne deux caractères (utilisé dans codagev)
char sousl(char l, char l2 );   //  Soustrait deux caractères (utilisé dans decodagev)
std::string codagev(std::string texte, std::string mot);   // Code un texte avec le chiffrement vigenère à l'aide du mot
std::string decodagev(std::string texte, std::string mot);   // Déode un texte avec le chiffrement vigenère à l'aide du mot

std::string decodage_automatique_v(std::string texte, int TAILLE_MAX = 20); // Retourne les cles potentiellement utilisées pour chiffrer le message avec vigenère
void kasiski_test(std::string texte, std::vector<int> & distance, int taille = 3); // Retourne les distances entre les apparitions de bout de texte pareils (de longueur taille)
int get_key_length(std::string texte); // Utilise le test de kasiki pour trouver la longueur de le cle
std::string get_key(std::string texte); // Utilise get_key_length puis trouve la cle avec la fréquence des 'e'

std::string codages(std::string texte, std::string substitution); // Code un texte avec le chiffrement par substitution (a devient la 1ère lettre de substitution, b la 2ème ...)
std::string decodages(std::string texte, std::string substitution); // Décode un texte avec le chiffrement par substitution (a devient la 1ère lettre de substitution, b la 2ème ...)

std::string analyse(std::string texte); // Retourne une analyse du texte sous forme de texte
void analyse(std::string texte, std::vector<int> & alphabet);  // Retourne une le nombre d'ocurence de chaque lettre dans un vector


// PARTIE SUR LES NOMBRES

std::string convertBase(std::string value, int from_base, int to_base); // convertit un nombre d'une base vers une autre

bool estPrems(long long nb);     // Retourne si un nombre est premier
void factprems(long long int nb, std::vector<int> & factprems);     // Retourne les facteurs premiers d'un nombre dans le vector 'factprems'
void diviseurs(long long int nb, std::vector<int> & diviseurs);    // Pas fini

void NbsPremsjusquaN(long long int N, std::vector<int> & nbsprems);    // Retourne tous les nombres premiers jusqu'à N dans le vector nbsprems
void NpremsNbsprems(long long int N, std::vector<int> & nbsprems);     // Retourne les N premiers nombres premiers dans le vector nbsprems

long long int fibo(int nb); //Retourne le terme nb de la suite de fibonacci
std::string farey_approximation(float nb, int max_precision = 1000000); // retourne une fraction (de la forme "45/67") qui est une approximation d'un nombre réel (à virgule)
long double approximation_racinecubique(int nb, int precision = 40); // retourne une approximation de la racine cubique
long double approximation_racinecarre(int nb, int precision = 40); // retourne une approximation de la racine carré

#endif // OUTILS_H