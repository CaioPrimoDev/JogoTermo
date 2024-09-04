# JogoTermo
- Repositório para o desenvolvimento de um jogo, a pedido da professora Stefani no IFBA de Irecê Bahia

 - [ ] Para uma tarefa não concluída
 - [x] Para uma tarefa concluída
 - Ao selecionar "Commit changes" sempre use a opção "Commit directly to the main branch"

## Incrementações necessarias

- [ ] Melhorar a validação das letras, pois quando a palavra aleatoria tem uma letra (S por exemplo), e a palavra (input_word) tem duas (S por exemplo), o codigo irá entender que há dois 'S', mesma que um deles já esteja na posição correta
- [ ] Otimizar o codigo para evitar overflow
- [ ] Melhorias estéticas
- [x] ~~Corrigir linha "459" " if(modoDeJogo != 1){system("clear");} " // queria que o console só fosse limpo no modo Jogo Normal~~
- [ ] Incrementar validação para não registrar palavras repetidas 
- Basicamente,  a tela só deve ser limpa no modo normal, por que servirá como debugger
- Adicione algo a lista caso tenha algum erro

### IMPORTANTE
- [ ] ~~Fazer o programa suportar 2 arquivos (vou ver se suportar outro alem de .txt)~~
- [x] Incrementar uma lista (array/matriz) para registrar a variavel "input_word". Para que a cada loop, todas as palavras sejam impressas
      
       > CaioPrimoDev

## Avisos e Instruções Adicionais
- Quando há um "continue;" dentro de um loop fpr, ele não reinicia o loop, apenas vai para a proxima interação, ou seja, se em i=4, houver um continue;, então o loop vai para i=5, o que pode gerar erros no registro de palavras, então cuidado ao mexer com o loop principal;
- As opções "push" e "pull" servem para "empurrar" e "puxar", isso se refere às alterações, 'empurrar' serve para atualizar as alterações, no caso, passar as suas alterações para o GitHub, e "puxar" serve para pegar a versão do codigo salva no GitHub e sobrescreve-la no Replit. Sincronizar("sync with Remote") faz os dois, então eu não recomendo usar, já que as alterações de outra pessoa podem interferir com as suas;
### Aviso: O compilador do Replit tem alguns erros crassos, então cuidado, as vezes um erro pode ser devido ao compilador, e não o codigo (por isso criei as funções externas "image" e "iniciar")
### Aviso: Não confuna, "main" é o nome da branch principal de um codigo, no caso, o nome aqui é "jogoTermo.c", então ignore o arquivo com nome "main"
### AVISO: IGNORE "main", "main-debug", ".gitginore", ".git", "Makefile", ".ccls-cache". Para todos os efeitos, as alterações devem ocorrer em "jogoTermo" e "palavras_validas(caso precise adcionar mais alguma palavra)"
### Eu sei que eu já disse isso, mas o compilador do Replit é COMPLETAMENTO TRAVADO


