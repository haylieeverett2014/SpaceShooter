using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour
{
    public GameObject hazard;
    public Vector3 spawnValues;
    public int hazardCount;
    public float spawnWait;
    public float startWait;
    public float waveWait;

    public GUIText scoreText;
    public GUIText restartText;
    public GUIText gameOverText;
    public GUIText levelUpText;
    public GUIText moreHazardText;

    private bool gameOver;
    private bool restart;
    private int score;

    void Start()
    {
        gameOver = false;
        restart = false;
        restartText.text = "";
        gameOverText.text = "";
        levelUpText.text = "";
        moreHazardText.text = "";
        score = 0;
        UpdateScore();
        StartCoroutine(SpawnWaves());
    }

    IEnumerator SpawnWaves()
    {
        while (true)
        {
            yield return new WaitForSeconds(startWait);
            for (int i = 0; i < hazardCount; i++)
            {
                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
                Quaternion spawnRotation = Quaternion.identity;
                Instantiate(hazard, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnWait);
            }
            yield return new WaitForSeconds(waveWait);

            if(gameOver)
            {
                restartText.text = "Press 'R' for Restart";
                restart = true;
                break;
            }
        }
    }
    
    void Update()
    {
        if(restart)
        {
            if(Input.GetKeyDown(KeyCode.R))
            {
                Application.LoadLevel(Application.loadedLevel);
            }
        }
    }

    public void AddScore(int newScoreValue)
    {
        score += newScoreValue;
        UpdateScore();
        if (score % 50 == 0 && gameOver==false)
        {
            waveWait = waveWait / 2;
            levelUpText.text = "Level Up! Asteroids are coming faster";
        }

        else
        {
            levelUpText.text = "";
        }

        if(score % 90 == 0 && gameOver==false)
        {
            hazardCount = hazardCount + 5;
            moreHazardText.text = "Adding 5 hazards to the game";
        }

        else
        {
            moreHazardText.text = "";
        }
    }

    void UpdateScore()
    {
        scoreText.text = "Score: " + score;
    }
	
    public void GameOver()
    {
        gameOverText.text = "Game Over!";
        gameOver = true;
    }
}
