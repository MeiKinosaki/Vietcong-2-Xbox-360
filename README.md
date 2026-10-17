# Vietcong 2 — Xbox 360

Projeto experimental para investigar a viabilidade de um port nativo de **Vietcong 2 (PC)** para Xbox 360. Este repositório contém scaffolding independente e documentação; não contém a engine original nem recursos proprietários do jogo.

> **Versão estável do plano: v0.2b.** A etapa seguinte (v0.3b) está em andamento: foram adicionadas interfaces iniciais de logging e uma lista de auditoria de portabilidade, ainda sem integração completa ou testes dedicados. Não há port jogável nem ELF/`default.xex` validado.

## Conteúdo presente

- `src/platform/platform.h`: interface inicial da plataforma.
- `src/platform/platform_stub.c`: implementação stub para host.
- `src/main.c`: programa mínimo de scaffold.
- `tests/test_platform.c`: teste inicial da interface.
- `Makefile`: alvos de build e teste de host.
- `.github/workflows/host-ci.yml`: workflow de CI de host.
- `src/platform/log.h` e `src/platform/log_stub.c`: interface e stub de logging, ainda não ligados ao build principal.
- `docs/PORTABILITY_AUDIT.md`: checklist inicial de dependências a auditar.

## Build de host

Em um ambiente com compilador C99 e GNU Make:

```sh
make
make test
```

Esse build, quando executado, produz apenas um programa de scaffold para o sistema host. Não produz executável Xbox 360. O workflow de CI precisa ser conferido na aba **Actions**; não há resultado verde confirmado nesta sessão.

## Estado dos subsistemas

| Subsistema | Estado |
|---|---|
| Interface de plataforma | Scaffold inicial presente |
| Backend Xbox 360/Xenon | Não implementado |
| Auditoria da engine/dependências | Checklist criado; auditoria real pendente |
| Logging | Interface/stub criados; integração e teste pendentes |
| Renderização / Direct3D | Não implementada |
| Áudio | Não implementado |
| Entrada / controle | Não implementada |
| Arquivos e saves | Não implementados |
| CI de host | Configurado; resultado remoto não confirmado |
| Toolchain Xenon | Não validada |
| ELF para Xbox 360 | Não gerado |
| `default.xex` | Não gerado |
| Teste em console | Não realizado |

## Roadmap sequencial

### v0.1b — Base documental
- [x] Definir escopo, limites e critérios de evidência.

### v0.2b — Scaffold de plataforma
- [x] Criar interface inicial e backend stub de host.
- [x] Adicionar programa mínimo, teste e Makefile.
- [x] Configurar CI de host.
- [ ] Confirmar workflow verde e registrar o resultado.
- [ ] Verificar disponibilidade e versões da toolchain Xenon.

### v0.3b — Abstrações de sistema (em andamento)
- [x] Criar interface inicial de logging e stub de host.
- [x] Criar checklist de auditoria de portabilidade.
- [ ] Integrar logging ao build e ao programa principal.
- [ ] Adicionar testes para níveis de logging e mensagens nulas.
- [ ] Definir interfaces de tempo, entrada e sistema de arquivos.
- [ ] Documentar dependências reais após obter fontes autorizadas.

### v0.4b — Prova de conceito gráfica
- Definir interface mínima de renderização.
- Criar teste gráfico independente, sem recursos proprietários.
- Documentar limitações de GPU e memória.

### v0.5b — Pipeline de artefatos
- Automatizar build ELF quando a toolchain compatível estiver disponível.
- Investigar conversão para XEX.
- Validar a inicialização no ambiente-alvo antes de declarar o artefato funcional.

As versões serão avançadas uma por vez, sem pular números. Só será considerada concluída uma tarefa com código, teste, log ou artefato verificável. Percentuais não serão apresentados como fatos sem critérios e evidências.

## Direitos e recursos

Não adicione cópias do jogo, executáveis comerciais, mapas, modelos, texturas, áudio ou outros recursos proprietários sem autorização. A licença deste repositório não concede direitos sobre Vietcong 2 ou componentes de terceiros.

## Critérios de progresso real

1. Código presente no repositório.
2. Compilação reproduzível com logs.
3. Testes com resultados registrados.
4. ELF/XEX gerado e validado com ferramentas compatíveis.
5. Execução no Xbox 360 documentada separadamente da compilação.

## Registro

- **Versão estável:** v0.2b
- **Próxima versão em andamento:** v0.3b
- **Branch:** `main`
- **Estado:** scaffold inicial; port ainda não funcional
