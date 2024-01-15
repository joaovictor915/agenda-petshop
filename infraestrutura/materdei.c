struct endereco{
	char rua[50];
	char bairro[50];
	char cidade[50];
	int numero;
};

typedef struct endereco endereco_s;

struct dadosEscolares{
	int num_matricula;
	char escola_anterior[50];
	char serie[40];
};

typedef struct dadosEscolares dadosEscolares_s;

struct Aluno{
	char nome[50];
	int cpf[11];
	char data_de_nascimento[10];
	char nome_do_pai[50];
	char nome_da_m˜ae[50];
	dadosEscolares_s
};

typedef struct Aluno Aluno_s;

endereco_s* inicializaEndereco(rua, bairro, cidade, numero){
	endereco_s * endereco = (endereco_s*)malloc(sizeof(endereco_s));
	
	endereco->rua = rua;
	endereco->bairro = bairro;
	endereco->cidade = cidade;
	endereco->numero = numero;
	
	return endereco;
}

int main{
	endereco_s* enderecoAluno;
	dadosEscolares_s* dadosEAluno;
	Aluno_s* aluno;
	
	enderecoAluno = inicializaEndereco("dos bobos", "Lagoa", "BH", 317);
	printf("%s %s %s %d", enderecoAluno->rua, enderecoAluno->bairro, enderecoAluno->cidade, endereco->numero);
	
}
