using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float speed = 15.0f;
	public float padding = 1f;
	public GameObject projectile;
	public float firingRate = 0.2f;
	public float health = 250;
	public AudioClip playerFires;

	float xmin, xmax;

	void Start() {
		float distance = transform.position.z - Camera.main.transform.position.z;
		Vector3 leftmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 0, 0, distance));
		Vector3 rightmost = Camera.main.ViewportToWorldPoint (new Vector3 ( 1, 0, distance));
		xmin = leftmost.x + padding;
		xmax = rightmost.x - padding;
	}

	void Update() {

		if (Input.GetKey (KeyCode.LeftArrow)) {
			transform.position += Vector3.left * speed * Time.deltaTime;
		}

		else if (Input.GetKey (KeyCode.RightArrow)) {
			transform.position += Vector3.right * speed * Time.deltaTime;
		}

		// Restrict the player to the playspace
		float newX = Mathf.Clamp (transform.position.x, xmin, xmax);
		transform.position = new Vector3 (newX, transform.position.y, transform.position.z);

		if (Input.GetKeyDown (KeyCode.Space)) {
			InvokeRepeating ("shootLaser", 0.0001f, firingRate);
		}
		if (Input.GetKeyUp (KeyCode.Space)) {
			CancelInvoke ("shootLaser");
		}
	}

	void shootLaser () {
		GameObject laser = Instantiate (projectile, transform.position, Quaternion.identity) as GameObject;
		AudioSource.PlayClipAtPoint (playerFires, transform.position);
	}

	void OnTriggerEnter2D(Collider2D col) {

		Debug.Log ("Player hit!");
		enemyLaser missile = col.gameObject.GetComponent<enemyLaser>();

		if (missile) {
			health -= missile.GetDamage ();
			missile.Hit();

			if (health <= 0) {
				Destroy(gameObject);
			}

			Debug.Log ("Hit by a projectile.");
		}
	}
}
