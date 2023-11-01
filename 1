#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#include <string.h>

typedef struct {
	char* name;
	int mdScore;
	int fnScore;
}Node;

char *student_nametable;
Node *nodeTable;
Node* root = NULL;

int compare(const void* cp1, const void* cp2) {
	return strcmp(((Node*) cp1)->name, ((Node*)cp2)->name);
}

void print_node (const void* nodeptr, VISIT order, int level) {
	if (order == preorder || order == leaf) {
		printf("student_name = %-20s, middle score = %d, final score = %d\n",
			(*(Node**)nodeptr)->name,
			(*(Node**) nodeptr)->mdScore,
			(*(Node**)nodeptr)->fnScore);
	}
}

int main() {

	int studentCnt;

	printf("Input Number of Student : ");
	scanf("%d", &studentCnt);

	student_nametable = (char*)malloc(sizeof(char) * studentCnt);
	nodeTable = (Node*)malloc(sizeof(Node) * studentCnt);

	char* studentptr = student_nametable;
	Node* nodeptr = nodeTable;
	Node** ret;

	for (int i = 0; i < studentCnt; i++) {
		printf("Please enter student information! : \n");
		scanf("%s %d %d", studentptr, &nodeptr->mdScore, &nodeptr->fnScore);
		nodeptr->name = studentptr;

		//Add Tree
		ret = (Node**)tsearch((void*)nodeptr, (void**)&root, compare);

		printf("\"%s\"", (*ret)->name);
		if (*ret == nodeptr)
			printf("Added to the tree.\n");
		else
			printf("Already exists in the tree.\n");

		studentptr += strlen(studentptr) + 1;
		nodeptr++;
	}

	twalk((void*)root, print_node);

	return 0;
}
