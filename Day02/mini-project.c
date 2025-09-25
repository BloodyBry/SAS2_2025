#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 100
#define TAILLE_TITRE 50
#define TAILLE_AUTEUR 50


char titres[MAX_LIVRES][TAILLE_TITRE];
char auteurs[MAX_LIVRES][TAILLE_AUTEUR];
float prix[MAX_LIVRES];
int quantite[MAX_LIVRES];


int nbLivres = 0;

void ajouterLivre() {
    if (nbLivres >= MAX_LIVRES) {
        printf("Stock plein ! Impossible d'ajouter un nouveau livre.\n");
        return;
    }

    printf("Titre du livre : ");
    scanf(" %[^\n]", titres[nbLivres]); 

    printf("Auteur du livre : ");
    scanf(" %[^\n]", auteurs[nbLivres]);

    printf("Prix du livre : ");
    scanf("%f", &prix[nbLivres]);

    printf("Quantité en stock : ");
    scanf("%d", &quantite[nbLivres]);

    nbLivres++;              
    printf("Livre ajouté avec succès !\n");
}

void afficherLivres() {
    if (nbLivres == 0)
    {
        printf("Aucun livre en stock!\n");
        return;
    }

    for (int i = 0; i < nbLivres; i++)
    {
        printf("\nLivre %d: \n", i + 1);
        printf("Titre: %s\n", titres[i]);
        printf("Auteur: %s\n", auteurs[i]);
        printf("Prix: %.2f\n", prix[i]);
        printf("quantite: %d\n", quantite[i]);
    }
}

void mettreAjourQuantite()
{
    char titreRecherche[TAILLE_TITRE];
    int nvQuantite;

    printf("Titre de livre a mettre a jour: \n");
    scanf(" %[^\n]", &titreRecherche);

    for (int i = 0; i < nbLivres; i++)
    {
        if (strcmp(titres[i], titreRecherche) == 0)
        {
            printf("Nouvelle quantité: ");
            scanf("%d", &nvQuantite);
            quantite[i] = nvQuantite;
            printf("Quantité mis a jours avec succés!\n");
            return;
        }
    }
    printf("livre pas trouvé! :(\n");
}

void supprimerLivre() {
    char titreRecherche[TAILLE_TITRE];

    printf("Titre du livre à supprimer : ");
    scanf(" %[^\n]", titreRecherche);

    for (int i = 0; i < nbLivres; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            for (int j = i; j < nbLivres - 1; j++) {
                strcpy(titres[j], titres[j+1]);
                strcpy(auteurs[j], auteurs[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
            }
            nbLivres--;
            printf("Livre supprimé avec succès !\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}


void totalLivres()
{
    int total = 0;
    for (int i = 0; i < nbLivres; i++)
    {
        total += quantite[i];
    }
    printf("Nombres total des livres en stock: %d\n", total);
}

int main()
{
    int choix;
    
    do {
        printf("\n---Gestion de stock de librairie---\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Mettre a jour les livres\n");
        printf("4. Supprimer un livre\n");
        printf("5. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1: ajouterLivre(); break;
            case 2: afficherLivres(); break;
            case 3: mettreAjourQuantite(); break;
            case 4: supprimerLivre(); break;
            case 5: totalLivres(); break;
            case 0: printf("Au revoir!\n"); break;
            default: printf("Choix invalide.\n"); break;
        }
    } while (choix != 0);
    
    return 0;
}