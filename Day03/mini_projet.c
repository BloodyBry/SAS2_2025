#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct{
    char nom[50];
    char num[20];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS];
int nbContacts = 0;

void ajouterContact(){
    if (nbContacts >= MAX_CONTACTS)
    {
        printf("Carnet plein!\n");
        return;
    }
    printf("Entrer le nom du contact: ");
    scanf(" %49[^\n]", contacts[nbContacts].nom);
    printf("Entrer son numero: ");
    scanf(" %19[^\n]", contacts[nbContacts].num);
    printf("Entrer son email: ");
    scanf(" %49[^\n]", contacts[nbContacts].email);
    
    printf("Contact ajouté avec succés!\n");
    nbContacts++;
}

void afficherContact(){
    if (nbContacts == 0)
    {
        printf("Aucun contact à afficher!\n");
        return;
    }
    
    printf("Listes des Contacts: \n");
    for (int i = 0; i < nbContacts; i++)
    {
        printf("Le nom du contact: %s\n", contacts[i].nom);
        printf("Son telephone: %s\n", contacts[i].num);
        printf("Son email: %s\n", contacts[i].email);
        printf("----------------------------\n");
    }
}

void rechercherContact()
{
    char nomRecherche[50];
    printf("Entrer le contact à rechercher: ");
    scanf(" %[^\n]", nomRecherche);
    
    for (int i = 0; i < nbContacts; i++)
    {
        if (strcmp(contacts[i].nom, nomRecherche) == 0)
        {
            printf("Son telephone: %s\n", contacts[i].num);
            printf("Son email: %s\n", contacts[i].email);
            printf("Contact trouvé!\n");
            return;
        }
    }
    printf("Contact pas trouvé!\n");
}

void modifierContact()
{
    char nomRecherche[50];
    printf("Entrer le contact à rechercher: ");
    scanf(" %[^\n]", nomRecherche);
    
    for (int i = 0; i < nbContacts; i++)
    {
        if (strcmp(contacts[i].nom, nomRecherche) == 0)
        {
            printf("Contact Trouvé!\n");
            printf("Son nouveau telephone: ");
            scanf(" %[^\n]", contacts[i].num);
            printf("Son nouveau email: ");
            scanf(" %[^\n]", contacts[i].email);
            printf("Contact modifié avec succés!\n");
            return;
        }
    }
    printf("Contact pas trouvé!\n");
}

void supprimerContact()
{
    char nomRecherche[50];
    printf("Entrer le contact à rechercher: ");
    scanf(" %[^\n]", nomRecherche);
    
    for (int i = 0; i < nbContacts; i++)
    {
        if (strcmp(contacts[i].nom, nomRecherche) == 0)
        {
            for (int j = i; j < nbContacts - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            nbContacts--;
            printf("Contact supprimé avec succès!\n");
            return;
        }
    }
    printf("Contact pas trouvé!\n");
}

int main()
{
    int choix;
   
    do{
        printf("\n============================================\n");
        printf("           GESTION DES CONTACTS\n");
        printf("             By: Adnane EL YAZIDI\n");
        printf("============================================\n");
        printf("1. Ajouter contact\n");
        printf("2. Afficher contact\n");
        printf("3. Rechercher contact\n");
        printf("4. Modifier contact\n");
        printf("5. Supprimer contact\n");
        printf("0. Quitter\n");
        printf("============================================\n");
        printf("Votre Choix: ");
        if (scanf("%d", &choix) != 1)
        {
            printf("Veuillez entrer un nombre valide!\n");
            while (getchar() != '\n');
            choix = -1;
            continue;
        }
    
    
        switch(choix) {
            case 1 : ajouterContact(); break;
            case 2 : afficherContact(); break;
            case 3 : rechercherContact(); break;
            case 4 : modifierContact(); break;
            case 5 : supprimerContact(); break;
            case 0 : printf("Au Revoir!\n"); break;
            default : printf("Choix Invalide\n");
            }
        } while (choix != 0);
    
    return 0;
}