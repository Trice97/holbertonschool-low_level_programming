#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard POSIX.
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre de lettres à lire et à afficher.
 *
 * Return: Le nombre réel de lettres lues et affichées, ou 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* Si le nom du fichier est NULL, on retourne 0 */
	if (filename == NULL)
		return (0);

	/* Ouvrir le fichier */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allouer de la mémoire pour le tampon */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Lire dans le fichier */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Écrire sur la sortie standard */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Libérer la mémoire et fermer le fichier */
	free(buffer);
	close(fd);
	return (bytes_written);
}

