# Vietcong 2 — Xbox 360

Projeto experimental para pesquisar a viabilidade de um port nativo de **Vietcong 2 (PC)** para Xbox 360. O objetivo inicial é estabelecer uma base de engenharia independente e verificável, sem incluir executáveis, recursos proprietários ou arquivos extraídos do jogo original.

> **Estado atual: v0.1b — planejamento e scaffold inicial.** Ainda não há port jogável, engine original integrada, ELF ou `default.xex` validado. Nenhuma compilação foi confirmada neste repositório.

## Objetivos

- Investigar dependências da versão para Windows e definir uma estratégia de portabilidade.
- Criar uma camada de plataforma isolada para o Xbox 360 (CPU Xenon / PowerPC).
- Planejar substituições para APIs gráficas, áudio, entrada, arquivos e temporização do Windows.
- Preparar uma compilação reproduzível, inicialmente mirando ELF e posteriormente XEX.
- Manter progresso incremental, testes e evidências por versão.

## Estado por subsistema

| Subsistema | Estado | Próxima tarefa |
|---|---|---|
| Auditoria de código e dependências | Não iniciada | Inventariar apenas fontes e dependências autorizadas |
| Camada de plataforma | Planejada | Definir interfaces independentes da plataforma |
| Renderização / Direct3D | Não implementada | Mapear requisitos e desenhar backend compatível |
| Áudio | Não implementado | Identificar API e definir abstração |
| Entrada / controle | Não implementada | Definir mapeamento para controle Xbox 360 |
| Sistema de arquivos / saves | Não implementado | Definir caminhos e formato de dados próprios |
| Toolchain Xenon | Não validada | Confirmar compilador, linker e SDK disponíveis |
| ELF | Não gerado | Criar alvo mínimo depois de validar a toolchain |
| `default.xex` | Não gerado | Só declarar concluído após conversão e teste verificáveis |
| Testes em console | Não realizados | Registrar hardware, build e resultado de cada teste |

## Roadmap sequencial

### v0.1b — Base e levantamento

- [x] Criar registro inicial do projeto e critérios de progresso.
- [x] Registrar que o repositório ainda não contém um port funcional.
- [ ] Inventariar os arquivos e dependências que podem ser legalmente usados.
- [ ] Definir a arquitetura da camada de plataforma.
- [ ] Adicionar um scaffold mínimo de código e testes.
- [ ] Preparar CI sem afirmar suporte ao Xbox 360 até que a toolchain seja validada.

### v0.2b — Scaffold compilável

- Estrutura de diretórios e interfaces de plataforma.
- Programa mínimo sem dependência de conteúdo proprietário.
- Testes básicos executáveis no host de desenvolvimento.
- Primeira tentativa documentada de compilação Xenon, se a toolchain estiver disponível.

### v0.3b — Abstrações de sistema

- Entrada, temporização, arquivos e logging separados da lógica principal.
- Testes de unidade e verificação de compilação.
- Relatório das APIs que ainda impedem a portabilidade.

### v0.4b — Prova de conceito gráfica

- Definir uma pequena interface de renderização.
- Validar um teste gráfico independente, sem recursos do jogo.
- Documentar limitações de GPU e memória.

### v0.5b — Pipeline de artefatos

- Automatizar build ELF quando a toolchain estiver disponível.
- Investigar conversão para XEX e validar o resultado com ferramentas compatíveis.
- Testar inicialização no ambiente-alvo antes de declarar um artefato funcional.

As versões serão avançadas **uma por vez**. Uma etapa só será marcada como concluída quando houver código, teste ou artefato verificável. Percentuais de implementação não serão estimados como fatos sem critérios e evidências.

## Compilação

A compilação para Xbox 360 depende de uma toolchain compatível com Xenon/PowerPC e de ferramentas capazes de produzir um executável aceito pelo console. A configuração exata ainda precisa ser confirmada. Até lá, não se deve presumir que um build genérico para Linux ou Windows produza um XEX funcional.

## Conteúdo e direitos

Este repositório não deve distribuir o jogo original, executáveis comerciais, mapas, modelos, texturas, áudio ou outros recursos proprietários. Use apenas código, ferramentas e materiais para os quais você tenha autorização. A licença deste repositório não concede direitos sobre Vietcong 2 nem sobre seus componentes de terceiros.

## Critérios para declarar progresso real

1. Código-fonte presente no repositório.
2. Compilação com logs ou workflow reproduzível.
3. Testes passando, com resultados registrados.
4. Para ELF/XEX: artefato gerado e validação identificável.
5. Para execução no Xbox 360: teste real documentado, sem confundir sucesso de compilação com jogabilidade.

## Registro

- **Versão de planejamento:** v0.1b
- **Branch principal:** `main`
- **Estado:** scaffold documental; port ainda não funcional
