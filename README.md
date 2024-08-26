# JogoTermo
- Repositório para o desenvolvimento de um jogo, a pedido da professora Stefani no IFBA de Irecê Bahia

 - [ ] Para uma tarefa não concluída
 - [x] Para uma tarefa concluída
 - Ao selecionar "Commit changes" sempre use a opção "Commit directly to the main branch"

## Incrementações necessarias
- [ ] Incrementar uma lista (array/matriz) para registrar a variavel "input_word". Para que a cada loop, todas as palavras sejam impressas
- [ ] Melhorar a validação das letras, pois quando a palavra aleatoria tem uma letra (S por exemplo), e a palavra (input_word) tem duas (S por exemplo), o codigo irá entender que há dois 'S', mesma que um deles já esteja na posição correta
- [ ] Otimizar o codigo para evitar overflow
- [ ] Alterar o codigo, para suportar palavras acima de 5 letras
- Recomendação: não mexer em "#define MAX_WORD_LENGHT", mas criar outra variavel temporaria, que ira validar o tamanho maximo da palavra (evitar ler caracteres '\0', no caso de MAX_WORD_LENGHT tenha tamanho 10, mas a palavra lida só 5 por exemplo) (é só uma sugestão)
- [ ] Melhorias estéticas
- [ ] Corrigir linha "459" " if(modoDeJogo != 1){system("clear");} " // queria que o console só fosse limpo no modo Jogo Normal
- Adicione algo a lista caso tenha algum erro
  
### Aviso: O compilador do Replit tem alguns erros crassos, então cuidado, as vezes um erro pode ser devido ao compilador, e não o codigo (por isso criei as funções externas "image" e "iniciar")
### Aviso: Não confuna, "main" é o nome da branch principal de um codigo, no caso, o nome aqui é "jogoTermo.c", então ignore o arquivo com nome "main"
### AVISO: IGNORE "main", "main-debug", ".gitginore", ".git", "Makefile", ".ccls-cache". Para todos os efeitos, as alterações devem ocorrer em "jogoTermo" e "palavras_validas(caso precise adcionar mais alguma palavra)"
