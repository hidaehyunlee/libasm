# libasm

> *The aim of this project is to get familiar with **assembly language.***



#### 1. 소개

어셈블리어는, 0과 1로만 이루어져 있는 기계어에 MOV, ADD와 같은 명령어를 각각 대응시킨, **low-level** 프로그래밍 언어이다.

#### 2. 일반 지침사항

- 라이브러리 이름은 `libasm.a`

- 함수의 동작을 확인할 수 있는 `main.c` 파일을 제출해야 한다.

- 아래의 함수를 Intel의 64 bits 어셈블리어로 재작성한다.

  - `ft_strlen` (man 3 strlen)

  - `ft_strcpy` (man 3 strcpy)

  - `ft_strcmp` (man 3 strcmp)

  - `ft_write` (man 2 write)

  - `ft_read` (man 2 read)

  - `ft_strdup` (man 3 strdup, you can call to malloc)

- 함수에서 매개변수는 `rdi`, `rsi`, `rdx`, `rcx`, `r8`, `r9` 순으로 넘어오게 된다.

- `nasm` 으로 컴파일해야 한다.

- `errno` 변수를 올바르게 설정해야 한다.

  - 이를 위해 외부함수 `___error` 를 호출할 수 있다.

<br>

# 기록들

- [어셈블리 프로그램 구조와 x64 레지스터 이해하기](https://velog.io/@hidaehyunlee/libasm-어셈블리-프로그램-구조와-x64-레지스터-이해하기)
- [어셈블리 명령어(opcode) 정리](https://velog.io/@hidaehyunlee/libasm-어셈블리-명령어-opcode-정리)
- [strlen 함수를 어셈블리어로 짠다면?](https://velog.io/@hidaehyunlee/libasm-strlen-함수를-어셈블리어로-짠다면)

