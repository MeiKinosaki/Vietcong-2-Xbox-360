# Vietcong 2 — Xbox 360

Projeto experimental para investigar um port nativo de **Vietcong 2 (PC)** para Xbox 360. O repositório contém apenas um scaffold independente; não distribui executáveis nem recursos proprietários do jogo original.

> **Versão de trabalho: v0.2b — scaffold de plataforma e CI de host.** O pipeline de host foi adicionado, mas ainda não foi executado/confirmado nesta sessão. Não há port jogável nem ELF/`default.xex` validado.

## Implementado nesta etapa

- Interface C de plataforma em `src/platform/platform.h`.
- Backend stub de host em `src/platform/platform_stub.c`.
- Programa de demonstração em `src/main.c`.
- Teste de interface em `tests/test_platform.c`.
- `Makefile` com alvos `all`, `test` e `clean`.
- GitHub Actions em `.github/workflows/host-ci.yml`, para compilar e testar o scaffold em Ubuntu.

Esses arquivos verificam a estrutura básica do projeto; **não implementam a engine do Vietcong 2 nem APIs do Xbox 360**.

## Como testar no host

Requer um compilador C compatível com C99 e GNU Make:

```sh
make
make test
```

O executável criado é um programa de scaffold para o sistema host, não um binário Xbox 360. O workflow do GitHub deve ser verificado na aba **Actions** depois de um push.

## Estado por subsistema

| Subsistema | Estado |
|---|---|
| Estrutura de plataforma independente | Interface inicial adicionada |
| Backend Xbox 360/Xenon | Não implementado |
| Auditoria da engine original e dependências | Pendente |
| Renderização / Direct3D | Não implementada |
| Áudio | Não implementado |
| Entrada / controle Xbox 360 | Não implementada |
| Arquivos e saves | Não implementados |
| Build de host | Workflow configurado; resultado precisa ser confirmado no Actions |
| Toolchain Xenon | Não validada |
| ELF para Xbox 360 | Não gerado |
| `default.xex` | Não gerado |
| Testes em console | Não realizados |

## Roadmap sequencial

### v0.1b — Base documental
- [x] Registrar objetivos, limites e critérios de evidência.

### v0.2b — Scaffold de plataforma
- [x] Adicionar interface independente e stub de host.
- [x] Adicionar executável mínimo e teste.
- [x] Configurar CI de host.
- [ ] Confirmar execução verde do workflow.
- [ ] Confirmar toolchain Xenon disponível e documentar versões.

### v0.3b — Abstrações de sistema
- Separar logging, temporização, entrada e sistema de arquivos por interfaces.
- Acrescentar testes unitários para as interfaces.
- Criar um relatório de dependências e APIs a substituir, baseado apenas em fontes autorizadas.

### v0.4b — Prova de conceito gráfica
- Definir interface mínima de renderização.
- Criar teste gráfico independente, sem recursos do jogo.
- Documentar limitações de GPU e memória.

### v0.5b — Pipeline de artefatos
- Automatizar build ELF quando a toolchain compatível estiver disponível.
- Investigar conversão para XEX.
- Só declarar `default.xex` funcional após validação e teste no ambiente-alvo.

As versões avançam **uma por vez, sem pular números**. Uma tarefa só será marcada como concluída quando houver código, teste, log ou artefato verificável. Não serão inventados percentuais de implementação.

## Direitos e recursos

Não adicione ao repositório cópias do jogo, executáveis comerciais, mapas, modelos, texturas, áudio ou outros recursos proprietários sem autorização. Use somente fontes, ferramentas e materiais que você tenha direito de utilizar. A licença deste repositório não concede direitos sobre Vietcong 2 ou componentes de terceiros.

## Critérios de progresso real

1. Código presente no repositório.
2. Compilação reproduzível com logs.
3. Testes com resultados registrados.
4. ELF/XEX gerado e validado com ferramentas compatíveis.
5. Execução no Xbox 360 documentada separadamente da compilação.

## Registro

- **Versão de trabalho:** v0.2b
- **Branch:** `main`
- **Estado:** scaffold inicial; port ainda não funcional
