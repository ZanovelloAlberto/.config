#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;

int main() {
  const char *variableName = "UNO";
  const char *variableValue = "1";
  int length = strlen(variableName) + strlen(variableValue) + 1;

  // Calculate the length of the new environment variable
  // int length = snprintf(NULL, 0, "%s=%s", variableName, variableValue);

  // Allocate memory for the new environment variable
  char *newVariable = malloc(length + 1);
  snprintf(newVariable, length + 1, "%s=%s", variableName, variableValue);

  // Find the position of the last environment variable
  char **envp = environ;
  while (*envp != NULL) {
    envp++;
  }

  // Add the new environment variable
  *envp = newVariable;
  *(envp + 1) = NULL;

  // The environment variable is now set

  // Test: Print the environment variables
  envp = environ;
  while (*envp != NULL) {
    printf("%s\n", *envp);
    envp++;
  }

  return 0;
}
