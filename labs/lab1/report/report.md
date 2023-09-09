---
## Front matter
title: "Отчет по лабораторной работе №1"
subtitle: "по дисциплине: Информационная безопасность"
author: "Ким Михаил Алексеевич"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: false # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
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
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Начать знакомство с ОС Rocky Linux, вспомнить основы работы с GitHub, создать репозитрий. Вспомнить основы работ с Markdown.

# Задание

1. Установить дистрибутив Linux на базе RedHat: установить операционную систему Rocky на виртуальную машину, используя средства VirtualBox.

2. Настроить систему контроля версий - Git: создать репозиторий дисциплины, связать с локальной машиной, проинициализировать начальными значениями (добавить changelog, readme, gitignore, license).

# Теоретическое введение
## Термины

Репозиторий (от англ. repository — хранилище) — место, где хранятся и поддерживаются какие-либо данные. Чаще всего данные в репозитории хранятся в виде файлов, доступных для дальнейшего распространения по сети. [@wiki-repo]

Контроль версий - это способ сохранять изменения с течением времени, не перезаписывая предыдущие версии. [@git-guides]

Распределенное ПО для контроля версий - каждый разработчик, работающий с репозиторием, имеет копию всего этого репозитория. [@git-guides]

## Окружение

Rocky Linux - это корпоративная операционная система с открытым исходным кодом, разработанная таким образом, чтобы быть на 100% совместимой с Red Hat Enterprise Linux. Он находится в стадии интенсивной разработки сообществом. [@rocky-docs]

Git - это распределенное программное обеспечение для контроля версиями. [@git-guides]

VirtualBox - это кросс-платформенное ПО для виртуализации x86 и AMD64/Intel64 с открытым кодом для корпоративного и домашнего использования. [@vbox]


# Выполнение лабораторной работы
## Настройка VirtualBox и ОС

1. Скачаем образ ОС с оффициального сайта и установим виртуальную машину (рис. @fig:01, @fig:02, @fig:03, @fig:04, @fig:05).

    ![Загрузка ОС с оффициального сайта](image/Screenshot_1.png){#fig:01 width=86%}

    ![Создание виртуальной машины. 1](image/Screenshot_2.png){#fig:02 width=86%}

    ![Создание виртуальной машины. 2](image/Screenshot_3.png){#fig:03 width=86%}

    ![Создание виртуальной машины. 3](image/Screenshot_4.png){#fig:04 width=86%}

    ![Создание виртуальной машины. 4](image/Screenshot_5.png){#fig:05 width=86%}


2. Произведем первичные настройки ОС (рис. @fig:06, @fig:07, @fig:08, @fig:09, @fig:10, @fig:11).

    ![Выбор основного языка](image/Screenshot_6.png){#fig:06 width=86%}

    ![Выбор средств разработки](image/Screenshot_7.png){#fig:07 width=86%}

    ![Отключение KDUMP](image/Screenshot_8.png){#fig:08 width=86%}

    ![Выбор дополнительного языка](image/Screenshot_9.png){#fig:09 width=86%}

    ![Настройка интернет-подключения](image/Screenshot_10.png){#fig:10 width=86%}

    ![Установка](image/Screenshot_11.png){#fig:11 width=86%}


2. Произведем установку дополнений гостевой РС (рис. @fig:12, @fig:13).

    ![Выбор дополнений гостевой ОС](image/Screenshot_12.png){#fig:12 width=86%}

    ![Установка дополнений гостевой ОС](image/Screenshot_13.png){#fig:13 width=86%}


3. Просмотрим порядок загрузки системы командой `dmesg` (рис. @fig:14).

    ![Порядок загрузки системы](image/Screenshot_14.png){#fig:14 width=86%}


4. Просмотрим интересующую информацию командой `dmesg | grep -i <to-find>` (рис. @fig:15, @fig:16).

    ![Просмотр интересующей информации. 1](image/Screenshot_15.png){#fig:15 width=86%}

    ![Просмотр интересующей информации. 2](image/Screenshot_16.png){#fig:16 width=86%}


## Подключение и настройка GitHub

1. Конфигурируем git и создаем ключи (рис. @fig:18, @fig:19, @fig:20, @fig:21, @fig:22, @fig:23, @fig:24).

    ![Конфигурация переменных](image/Screenshot_18.png){#fig:18 width=86%}

    ![Конфигурация ssh-ключа](image/Screenshot_19.png){#fig:19 width=86%}

    ![Конфигурация pgp-ключа. 1](image/Screenshot_20.png){#fig:20 width=86%}

    ![Конфигурация pgp-ключа. 2](image/Screenshot_21.png){#fig:21 width=86%}

    ![Добавление pgp-ключа на GitHub](image/Screenshot_22.png){#fig:22 width=86%}

    ![Добавленный pgp-ключ на GitHub](image/Screenshot_23.png){#fig:23 width=86%}

    ![Конфигурация переменных для быстрого доступа к GitHub](image/Screenshot_24.png){#fig:24 width=86%}


2. Установа gh и подключение (рис. @fig:25, @fig:26, @fig:27, @fig:28, @fig:29).

    ![Установка gh](image/Screenshot_25.png){#fig:25 width=86%}

    ![Авторизация по gh](image/Screenshot_26.png){#fig:26 width=86%}

    ![Создание репозитория на локальном хосте](image/Screenshot_27.png){#fig:27 width=86%}

    ![Создание репозитория на GitHub. 1](image/Screenshot_28.png){#fig:28 width=86%}

    ![Создание репозитория на GitHub. 2](image/Screenshot_29.png){#fig:29 width=86%}


# Анализ результатов

Работа выполнена без каких-либо проблем. ОС Rocky Linux показала себя отлично. Особенно хотелось бы выделить скорость работы и графический интерфейс. Также порадовало наличие вкладок в терминале «из коробки».

# Выводы

Начал знакомство с ОС Rocky Linux, вспомнил основы работы с GitHub, создал репозитрий. Вспомнил основы работ с Markdown.


# Список литературы{.unnumbered}

::: {#refs}
:::
