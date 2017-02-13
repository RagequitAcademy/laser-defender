using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemy : MonoBehaviour {

	public float health = 150;
	public GameObject projectile;
	public float shotsPerSecond = 0.5f;
	public int scoreValue = 150;
	public AudioClip enemyFires;
	public AudioClip enemyDies;

	private ScoreKeeper scoreKeeper;

	void Start() {
		scoreKeeper = GameObject.Find ("Score").GetComponent<ScoreKeeper>();
	}

	void OnTriggerEnter2D(Collider2D col) {
		laserController missile = col.gameObject.GetComponent<laserController>();

		if (missile) {
			health -= missile.GetDamage ();
			missile.Hit();

			if (health <= 0) {
				Die ();
			}

			Debug.Log ("Hit by a projectile.");
		}
	}


	void Update() {
		float probability = shotsPerSecond * Time.deltaTime;
		if (Random.value < probability) {
			Fire ();
		}
	}

	void Fire() {
		Vector3 startPosition = transform.position + new Vector3 (0, -.5f, 0);
		GameObject missile = Instantiate (projectile, startPosition, Quaternion.identity) as GameObject;
		AudioSource.PlayClipAtPoint (enemyFires, transform.position);
	}

	void Die() {
		Destroy(gameObject);
		scoreKeeper.Score (scoreValue);
		AudioSource.PlayClipAtPoint (enemyDies, transform.position);
	}


}
