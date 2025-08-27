<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php
    $email = $_GET["email"];
    $password = $_GET["password"];
    $set_pass = 1234;
    if ($password == $set_pass) {
        echo "<script>alert('Password is Valid')</script>";
    } else {
        echo "<script>alert('Wrong Password')</script>";
    }
    ?>
</head>

<body>
    <div style="width: 50vw;margin-top:10vh;border: 1px solid black;padding:4rem;">
        <form method="GET">
            <label for="email">Email : &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</label>
            <input type="text" name="email">
            <br>
            <br>
            <label for="input1">Password : &nbsp;</label>
            <input type="number" name="password">
            <br>
            <br>
            <input type="submit" value="Check">
        </form>
    </div>
</body>

</html>