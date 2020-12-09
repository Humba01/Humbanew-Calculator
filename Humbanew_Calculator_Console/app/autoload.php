<?php 

    spl_autoload_register(function(string $nomeCompletoClasse){
        $autoload = str_replace("Humbanew\\Calculator", "app/class", $nomeCompletoClasse);
        $autoload = str_replace("\\", DIRECTORY_SEPARATOR, $autoload);
        $autoload = $autoload . ".php";

        if(file_exists($autoload)) {
            require_once $autoload;
        }
    });