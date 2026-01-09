<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        .form {
            width: 300px;
            height: 150px;
            margin: auto;
            /* padding:auto; */
            margin-top: 50px;
            border: 1px solid black;
            border-radius:15px;
            padding:15px;
        }
    </style>
    <?php
    function output($name, $age)
    {
        return "Hello $name, your age is $age.";
    }
    if ($_SERVER["REQUEST_METHOD"] == "GET") {
        $name = $_GET["name"];
        $age = $_GET["age"];
        $output = output($name, $age);
    }
    ?>
</head>

<body>
    <div class="form">
        <form method="GET">
            <label for="name">Enter Name: </label><br>
            <input type="text" name="name" value="<?php echo $name ?>">
            <br>
            <br>

            <label for="name">Enter Age: </label><br>
            <input type="text" name="age" value="<?php echo $age ?>">
            <br>
            <br>

            <input type="submit">

        </form>

    </div>
    <!-- <hr style="width:300px;margin:auto;"> -->
    <div class="form">
        <?php
            echo $output;
        ?>
    </div>
</body>

</html>