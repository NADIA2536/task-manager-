#include <stdio.h>
#include <stdlib.h>

void addTask() {
    FILE *file = fopen("tasks.txt", "a");
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return;
    }

    char task[100];
    printf("Entrer la tâche : ");
    getchar(); 
    fgets(task, sizeof(task), stdin);

    fprintf(file, "%s", task);
    fclose(file);

    printf("Tâche ajoutée avec succès !\n");
}

void showTasks() {
    FILE *file = fopen("tasks.txt", "r");
    if (file == NULL) {
        printf("Aucune tâche trouvée.\n");
        return;
    }

    char task[100];
    printf("\nListe des tâches :\n");

    while (fgets(task, sizeof(task), file)) {
        printf("- %s", task);
    }

    fclose(file);
}

int main() {
    int choix;

    do {
        printf("\n1. Ajouter une tâche\n");
        printf("2. Afficher les tâches\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                addTask();
                break;
            case 2:
                showTasks();
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide\n");
        }

    } while (choix != 0);

    return 0;
}
