---
## Front matter
lang: ru-RU
title: Лабораторная работа №6
subtitle: Мандатное разграничение прав в Linux
author:
  - Ким М. А.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 14 октября 2023

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

# Информация

## Докладчик

:::::::::::::: {.columns align=center}
::: {.column width="70%"}

  * Ким Михаил Алексеевич
  * студент уч. группы НФИбд-01-20
  * Российский университет дружбы народов
  * [1032201664@pfur.ru](mailto:1032201664@pfur.ru)
  * <https://github.com/exmanka>

:::
::: {.column width="30%"}

![](./image/0_me.png)

:::
::::::::::::::

# Вводная часть

## Актуальность

- Необходимость навыков работы с различными ОС, git, Markdown.

## Объект и предмет исследования

- Операционная система Rocky Linux
- SELinux
- Apache
- Язык разметки Markdown

## Цели и задачи

- Развитие навыков администрирования ОС Linux. Получение первого практического знакомства с технологией принудительного контроля доступа SELinux. Проверка работы SELinx на практике совместно с веб-сервером Apache.

# Процесс выполнения работы
## Получение информации о работе SELinux. Установка и проверка Apache

:::::::::::::: {.columns align=top}
::: {.column width="25%"}

![](image/Screenshot_1.png)

:::
::: {.column width="25%"}

![](image/Screenshot_2.png)

:::
::: {.column width="25%"}

![](image/Screenshot_3.png)

:::
::: {.column width="25%"}

![](image/Screenshot_4.png)

:::
::::::::::::::

## Получение информации о работе Apache

:::::::::::::: {.columns align=top}
::: {.column width="25%"}

![](image/Screenshot_5.png)

:::
::: {.column width="25%"}

![](image/Screenshot_6.png)

:::
::: {.column width="25%"}

![](image/Screenshot_7.png)

:::
::: {.column width="25%"}

![](image/Screenshot_8.png)

:::
::::::::::::::

## Отображение HTML-файла. Измение контекста файла. Просмотр логов

:::::::::::::: {.columns align=top}
::: {.column width="25%"}

![](image/Screenshot_9.png)

:::
::: {.column width="25%"}

![](image/Screenshot_10.png)

:::
::: {.column width="25%"}

![](image/Screenshot_11.png)

:::
::: {.column width="25%"}

![](image/Screenshot_12.png)

:::
::::::::::::::

## Изменение прослушиваемого TCP-порта для Apache

:::::::::::::: {.columns align=top}
::: {.column width="25%"}

![](image/Screenshot_13.png)

:::
::: {.column width="25%"}

![](image/Screenshot_14.png)

:::
::: {.column width="25%"}

![](image/Screenshot_15.png)

:::
::: {.column width="25%"}

![](image/Screenshot_16.png)

:::
::::::::::::::

## Обратное изменение прослушиваемого TCP-порта для Apache. Удаление созданных файлов

:::::::::::::: {.columns align=top}
::: {.column width="33%"}

![](image/Screenshot_17.png)

:::
::: {.column width="33%"}

![](image/Screenshot_18.png)

:::
::: {.column width="33%"}

![](image/Screenshot_19.png)

:::
::::::::::::::

# Результаты

- Выполнены все необходимые задания.

## Вывод

Развиты навыки администрирования ОС Linux. Получено первое практическое знакомство с технологией SELinux. Проверена работа SELinx на практике совместно с веб-сервером Apache.