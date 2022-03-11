# include <unistd.h> 

void ft_print_alphabet(void) {
	int A_SIZE = 26;
	char alphabet[A_SIZE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	for(int i = 0; i < A_SIZE; i++) {
		write(1, &alphabet[i]); 
	}
}

int main(int argc, char *argv){
	ft_print_alphabet();
	return 0; 
}
